#pragma once
#include <stdio.h>
using namespace System::Drawing;
struct TPoint {
	int x, y;
	TPoint(int _x = 0, int _y = 0) {
		x = _x;
		y = _y;
	}
};

class ISharp {
public:
	virtual TPoint* Show(Graphics ^g, Pen ^p, Brush ^b) = 0;
	virtual TPoint* find(int x, int y) = 0;
	
};

class TSharpPoint : public ISharp {
	TPoint *p;
public:
	TSharpPoint(TPoint *_p) :p(_p) {}
	virtual TPoint* Show(Graphics ^g, Pen ^pen, Brush ^b) {
		
		g->FillEllipse(b, p->x - 3.0, p->y - 3.0, 6, 6);
		g->DrawEllipse(pen, p->x - 3.0, p->y - 3.0, 6, 6);
		return p;
	}
	TPoint* find(int x, int y)
	{
		if ((x > p->x - 3) && (x < p->x + 3))
			if ((y > p->y - 3) && (y < p->y + 3))
				return p;
		return NULL;
	}
	TPoint* getval() {
		return p;
	}
};

class TSharpLine : public ISharp {
	ISharp *l, *r;
public:
	TSharpLine(ISharp *_l, ISharp *_r) :l(_l), r(_r) {}
	virtual TPoint* Show(Graphics ^g, Pen ^pen, Brush ^b) {
		TPoint *lp, *rp;
		lp = l->Show(g, pen, b);
		rp = r->Show(g, pen, b);
		g->DrawLine(pen, lp->x, lp->y, rp->x, rp->y);


		return lp;
	}
	TPoint* find(int x, int y)
	{
		TPoint *p;
		if ((p = l->find(x, y)) != NULL) return p;
		if ((p = r->find(x, y)) != NULL) return p;
		return NULL;
	}
	
	TPoint* getleft(Graphics ^g, Pen ^pen, Brush ^b) {
		TPoint *p;
		p = l->Show(g, pen, b);
		return p;
	}
	TPoint* getright(Graphics ^g, Pen ^pen, Brush ^b) {
		TPoint *p;
		p = r->Show(g, pen, b);
		return p;
	}
};

		class TSharpRectangle : public ISharp {
			ISharp *l_top, *r_bot;
		public:
			TSharpRectangle(ISharp *_l, ISharp *_r) :l_top(_l), r_bot(_r) {}
			virtual TPoint* Show(Graphics ^g, Pen ^pen, Brush ^b) {
				//int h = r_bot->x; l_top->y
				TPoint *lp, *rp;
				//TPoint *rt = new TPoint(l_top->Show(g, pen, b)->x, r_bot->Show(g, pen, b)->y);
				//TPoint *lb = new TPoint(r_bot->Show(g, pen, b)->x, l_top->Show(g, pen, b)->y);
				lp = l_top->Show(g, pen, b);
				rp = r_bot->Show(g, pen, b);
				
				if ((lp->x < rp->x) && (lp->y < rp->y))
				g->DrawRectangle(pen, lp->x, lp->y, rp->x - lp->x,rp->y - lp->y);
				
				
				if ((lp->x > rp->x) && (lp->y < rp->y))
					g->DrawRectangle(pen, rp->x, lp->y, lp->x - rp->x, rp->y - lp->y);

				if ((lp->x < rp->x) && (lp->y > rp->y))
					g->DrawRectangle(pen, lp->x, rp->y, rp->x - lp->x, lp->y - rp->y);

				if ((lp->x > rp->x) && (lp->y > rp->y))
					g->DrawRectangle(pen, rp->x, rp->y, lp->x - rp->x, lp->y - rp->y);
				return lp;
			}

			TPoint* find(int x, int y)
			{
				TPoint *p;
				if ((p = l_top->find(x, y)) != NULL) return p;
				if ((p = r_bot->find(x, y)) != NULL) return p;
		
				return NULL;
			}
		
		};
	
		class TSharpTriangle : public ISharp {
			ISharp *one, *two, *three;
		public:
			TSharpTriangle( ISharp * _one, ISharp *_two, ISharp *_three):one(_one), two(_two), three(_three) {}
			virtual TPoint* Show(Graphics ^g, Pen ^pen, Brush ^b) {
				TPoint *t1, *t2, *t3;
				t1 = one->Show(g, pen, b);
				
				t2 = two->Show(g, pen, b);
				t3 = three->Show(g, pen, b);
				g->DrawLine(pen, t1->x, t1->y, t2->x, t2->y);
				g->DrawLine(pen, t2->x, t2->y, t3->x, t3->y);
				g->DrawLine(pen, t3->x, t3->y, t1->x, t1->y);
				return t1;
			}

			TPoint* find(int x, int y)
			{
				TPoint *p;
				if ((p = one->find(x, y)) != NULL) return p;
				if ((p = two->find(x, y)) != NULL) return p;
				if ((p = three->find(x, y)) != NULL) return p;

				return NULL;
			}

		};
