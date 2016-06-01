
// SplitterView.cpp : CSplitterView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "Splitter.h"
#endif

#include "SplitterDoc.h"
#include "SplitterView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSplitterView

IMPLEMENT_DYNCREATE(CSplitterView, CView)

BEGIN_MESSAGE_MAP(CSplitterView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_32772, &CSplitterView::On32772)
	ON_COMMAND(ID_32773, &CSplitterView::On32773)
	ON_COMMAND(ID_32774, &CSplitterView::On32774)
	ON_COMMAND(ID_32775, &CSplitterView::On32775)
	ON_COMMAND(ID_32776, &CSplitterView::On32776)
	ON_COMMAND(ID_32777, &CSplitterView::On32777)
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CSplitterView ����/�Ҹ�

CSplitterView::CSplitterView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSplitterView::~CSplitterView()
{
}

BOOL CSplitterView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSplitterView �׸���

void CSplitterView::OnDraw(CDC* pDC)
{
	CClientDC dc(this);
	CSplitterDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	
}


// CSplitterView �μ�

BOOL CSplitterView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSplitterView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSplitterView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CSplitterView ����

#ifdef _DEBUG
void CSplitterView::AssertValid() const
{
	CView::AssertValid();
}

void CSplitterView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSplitterDoc* CSplitterView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSplitterDoc)));
	return (CSplitterDoc*)m_pDocument;
}
#endif //_DEBUG


// CSplitterView �޽��� ó����


void CSplitterView::OnLButtonDown(UINT nFlags, CPoint point)
{
	CClientDC dc(this);
	CSplitterDoc* pDoc = GetDocument();
	

	CBitmap bitmap1, bitmap2, bitmap3, bitmap4, bitmap5, bitmap6;

	bitmap1.LoadBitmap(IDB_BITMAP1);
	bitmap2.LoadBitmap(IDB_BITMAP2);
	bitmap3.LoadBitmap(IDB_BITMAP3);
	bitmap4.LoadBitmap(IDB_BITMAP4);
	bitmap5.LoadBitmap(IDB_BITMAP5);
	bitmap6.LoadBitmap(IDB_BITMAP6);

	BITMAP bmpinfo1, bmpinfo2, bmpinfo3, bmpinfo4, bmpinfo5, bmpinfo6;

	bitmap1.GetBitmap(&bmpinfo1);
	bitmap2.GetBitmap(&bmpinfo2);
	bitmap3.GetBitmap(&bmpinfo3);
	bitmap4.GetBitmap(&bmpinfo4);
	bitmap5.GetBitmap(&bmpinfo5);
	bitmap6.GetBitmap(&bmpinfo6);

	CDC dcmem1, dcmem2, dcmem3, dcmem4, dcmem5, dcmem6;

	dcmem1.CreateCompatibleDC(&dc);
	dcmem2.CreateCompatibleDC(&dc);
	dcmem3.CreateCompatibleDC(&dc);
	dcmem4.CreateCompatibleDC(&dc);
	dcmem5.CreateCompatibleDC(&dc);
	dcmem6.CreateCompatibleDC(&dc);

	dcmem1.SelectObject(&bitmap1);
	dcmem2.SelectObject(&bitmap2);
	dcmem3.SelectObject(&bitmap3);
	dcmem4.SelectObject(&bitmap4);
	dcmem5.SelectObject(&bitmap5);
	dcmem6.SelectObject(&bitmap6);

	

	if (button1 == 1){
		dc.BitBlt(point.x, point.y, bmpinfo1.bmWidth, bmpinfo1.bmHeight, &dcmem1, 0, 0, SRCCOPY);
		button1 = 0;
	}
	if (button2 == 1){
		dc.BitBlt(point.x, point.y, bmpinfo2.bmWidth, bmpinfo2.bmHeight, &dcmem2, 0, 0, SRCCOPY);
		button2 = 0;
	}
	if (button3 == 1){
		dc.BitBlt(point.x, point.y, bmpinfo3.bmWidth, bmpinfo3.bmHeight, &dcmem3, 0, 0, SRCCOPY);
		button3 = 0;
	}
	if (button4 == 1){
		dc.BitBlt(point.x, point.y, bmpinfo4.bmWidth, bmpinfo4.bmHeight, &dcmem4, 0, 0, SRCCOPY);
		button4 = 0;
	}
	if (button5 == 1){
		dc.BitBlt(point.x, point.y, bmpinfo5.bmWidth, bmpinfo5.bmHeight, &dcmem5, 0, 0, SRCCOPY);
		button5 = 0;
	}
	if (button6 == 1){
		dc.BitBlt(point.x, point.y, bmpinfo6.bmWidth, bmpinfo6.bmHeight, &dcmem6, 0, 0, SRCCOPY);
		button6 = 0;
	}


	m_p2.x = m_p.x = point.x;

	m_p2.y = m_p.y = point.y;

	m_bTrack = TRUE;


}


void CSplitterView::On32772()  //AND
{ 
	button1 = 1;
	button2 = 0;
	button3 = 0;
	button4 = 0;
	button5 = 0;
	button6 = 0;
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}


void CSplitterView::On32773() //OR
{
	button1 = 0;
	button2 = 1;
	button3 = 0;
	button4 = 0;
	button5 = 0;
	button6 = 0;
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}


void CSplitterView::On32774() //NAND
{
	button1 = 0;
	button2 = 0;
	button3 = 1;
	button4 = 0;
	button5 = 0;
	button6 = 0;
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}


void CSplitterView::On32775() //XOR
{
	button1 = 0;
	button2 = 0;
	button3 = 0;
	button4 = 1;
	button5 = 0;
	button6 = 0;
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}


void CSplitterView::On32776() //NOR
{
	button1 = 0;
	button2 = 0;
	button3 = 0;
	button4 = 0;
	button5 = 1;
	button6 = 0;
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}


void CSplitterView::On32777() //NOT
{
	button1 = 0;
	button2 = 0;
	button3 = 0;
	button4 = 0;
	button5 = 0;
	button6 = 1;
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}


void CSplitterView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	CClientDC dc(this);
	dc.MoveTo(m_p.x, m_p.y);

	dc.LineTo(point.x, point.y);

	m_bTrack = FALSE;

	CView::OnLButtonUp(nFlags, point);

}


void CSplitterView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	if ((nFlags & MK_LBUTTON) == MK_LBUTTON)
	{
		CDC * pDc = GetDC();
		pDc->SetROP2(R2_NOT);
		pDc->MoveTo(m_p.x, m_p.y);
		pDc->LineTo(m_p2.x, m_p2.y);
		pDc->MoveTo(m_p.x, m_p.y);
		pDc->LineTo(point.x, point.y);
		ReleaseDC(pDc);
		m_p2 = point;
	}

	CView::OnMouseMove(nFlags, point);
}
