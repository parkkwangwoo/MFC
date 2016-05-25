
// ChildView.cpp : CChildView Ŭ������ ����
//

#include "stdafx.h"
#include "MFCApplication2.h"
#include "ChildView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
	ON_COMMAND(ID_32772, &CChildView::On32772)
END_MESSAGE_MAP()



// CChildView �޽��� ó����

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	CPaintDC dc(this); // �׸��⸦ ���� ����̽� ���ؽ�Ʈ�Դϴ�.
	CRect rect;
	GetClientRect(&rect);
	CBrush brush(HS_CROSS, RGB(234, 234, 234));
	dc.SelectObject(&brush);
	dc.Rectangle(&rect);

	
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	
	// �׸��� �޽����� ���ؼ��� CWnd::OnPaint()�� ȣ������ ���ʽÿ�.
}



void CChildView::On32772()
{
	CPaintDC dc(this);
	
		CBitmap bitmap1;
		bitmap1.LoadBitmap(IDB_BITMAP1);
		BITMAP bmpinfo1;
		bitmap1.GetBitmap(&bmpinfo1);
		CDC dcmem1;
		dcmem1.CreateCompatibleDC(&dc);
		dcmem1.SelectObject(&bitmap1);
		dc.BitBlt(20, 20, bmpinfo1.bmWidth, bmpinfo1.bmHeight, &dcmem1, 0, 0, SRCCOPY);
	
	// TODO: ���⿡ ��� ó���� �ڵ带 �߰��մϴ�.
}
