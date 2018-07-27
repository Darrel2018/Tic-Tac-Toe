#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <Wincon.h>

#define BUTTON_ONE 1
#define BUTTON_TWO 2
#define BUTTON_THREE 3
#define BUTTON_FOUR 4
#define BUTTON_FIVE 5
#define BUTTON_SIX 6
#define BUTTON_SEVEN 7
#define BUTTON_EIGHT 8
#define BUTTON_NINE 9

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

void	AddControls(HWND);
void	loadImages();
void	reset();

HMENU hMenu;
HWND hBut, hBut2, hBut3, hBut4, hBut5, hBut6, hBut7, hBut8, hBut9, turntell, xwins, owins;
HBITMAP hGenerateImage, hGenerateImage2, hGenerateImage3, hGenerateImage4, hGenerateImage5, hGenerateImage6, hGenerateImage7, hGenerateImage8, hGenerateImage9, hGenerateImage10, hGenerateImage11, hGenerateImage12, hGenerateImage13;

int turn;
int rem[10];
int one, two, three, four, five, six, seven, eight, nine;
int oneo, twoo, threeo, fouro, fiveo, sixo, seveno, eighto, nineo;
int nowin;
int xwin;
int owin;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
	WNDCLASSW wc = {0};
	FreeConsole();
	wc.hbrBackground = (HBRUSH)(COLOR_ACTIVECAPTION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hInstance = hInst;
	wc.lpszClassName = L"myWindowClass";
	wc.lpfnWndProc = WindowProcedure;
	
	if (!RegisterClassW(&wc))
	{
		return -1;
	}
	CreateWindowW(L"myWindowClass", L"Tic_Tac_Toe", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100,100,500,500, NULL, NULL, NULL, NULL);

	MSG msg = {0};

	while ( GetMessage(&msg, NULL, NULL, NULL) )
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return(0);
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
	switch ( msg)
	{
		case WM_COMMAND:

			switch(wp)
			{
				case BUTTON_ONE:
					if(rem[0] == 0)
					{
						rem[0] = 1;
						if(turn == 0)
						{
						SendMessage(hBut, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						one = 1;
						if(one == two && one == three)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(one == four && one == seven)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(one == five && one == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						oneo = 1;
						if(oneo == twoo && oneo == threeo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(oneo == fouro && oneo == seveno)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(oneo == fiveo && oneo == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_TWO:
					if(rem[1] == 0)
					{
						rem[1] = 1;
						if(turn == 0)
						{
						SendMessage(hBut2, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						two = 1;
						if(one == two && one == three)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(two == five && two == eight)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut2, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						twoo = 1;
						if(oneo == twoo && oneo == threeo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(twoo == fiveo && twoo == eighto)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_THREE:
					if(rem[2] == 0)
					{
						rem[2] = 1;
						if(turn == 0)
						{
						SendMessage(hBut3, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						three = 1;
						if(one == two && one == three)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(three == six && three == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(three == five && three == seven)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut3, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						threeo = 1;
						if(oneo == twoo && oneo == threeo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(threeo == sixo && threeo == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(threeo == fiveo && threeo == seveno)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_FOUR:
					if(rem[3] == 0)
					{
						rem[3] = 1;
						if(turn == 0)
						{
						SendMessage(hBut4, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						four = 1;
						if(four == five && four == six)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(one == four && one == seven)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut4, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						fouro = 1;
						if(fouro == fiveo && fouro == sixo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(oneo == fouro && oneo == seveno)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_FIVE:
					if(rem[4] == 0)
					{
						rem[4] = 1;
						if(turn == 0)
						{
						SendMessage(hBut5, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						five = 1;
						if(four == five && four == six)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(two == five && two == eight)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(one == five && one == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(three == five && three == seven)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut5, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						fiveo = 1;
						if(fouro == fiveo && fouro == sixo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(twoo == fiveo && twoo == eighto)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(oneo == fiveo && oneo == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(threeo == fiveo && threeo == seveno)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_SIX:
					if(rem[5] == 0)
					{
						rem[5] = 1;
						if(turn == 0)
						{
						SendMessage(hBut6, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						six = 1;
						if(four == five && four == six)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(three == six && three == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut6, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						sixo = 1;
						if(fouro == fiveo && fouro == sixo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(threeo == sixo && threeo == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_SEVEN:
					if(rem[6] == 0)
					{
						rem[6] = 1;
						if(turn == 0)
						{
						SendMessage(hBut7, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						seven = 1;
						if(seven == eight && seven == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(one == four && one == seven)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(three == five && three == seven)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut7, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						seveno = 1;
						if(seveno == eighto && seveno == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(oneo == fouro && oneo == seveno)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(threeo == fiveo && threeo == seveno)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_EIGHT:
					if(rem[7] == 0)
					{
						rem[7] = 1;
						if(turn == 0)
						{
						SendMessage(hBut8, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						eight = 1;
						if(seven == eight && seven == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(two == five && two == eight)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut8, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						eighto = 1;
						if(seveno == eighto && seveno == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(twoo == fiveo && twoo == eighto)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
				case BUTTON_NINE:
					if(rem[8] == 0)
					{
						rem[8] = 1;
						if(turn == 0)
						{
						SendMessage(hBut9, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage);
						turn = 1;
						nine = 1;
						if(seven == eight && seven == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(three == six && three == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						if(one == five && one == nine)
						{
							reset();
							xwin++;
							if(xwin == 0)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							}
							if(xwin == 1)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
							}
							if(xwin == 2)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
							}
							if(xwin == 3)
							{
								SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							}
							break;
						}
						}else{
						SendMessage(hBut9, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage2);
						turn = 0;
						nineo = 1;
						if(seveno == eighto && seveno == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(threeo == sixo && threeo == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						if(oneo == fiveo && oneo == nineo)
						{
							reset();
							owin++;
							if(owin == 0)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							}
							if(owin == 1)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
							}
							if(owin == 2)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
							}
							if(owin == 3)
							{
								SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							}
							break;
						}
						}
						if(turn == 0)
						{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage3);
						}else{
							SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage4);
						}
						nowin++;
						if(nowin >= 9)
						{
							reset();
						}
						if(xwin == 0)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
						}
						if(xwin == 1)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage7);
						}
						if(xwin == 2)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage8);
						}
						if(xwin == 3)
						{
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage9);
							MessageBoxW(NULL, L"X has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
						if(owin == 0)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
						}
						if(owin == 1)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage11);
						}
						if(owin == 2)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage12);
						}
						if(owin == 3)
						{
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage13);
							MessageBoxW(NULL, L"O has won!!\nGame reset", L"WINNER", MB_OK);
							SendMessage(xwins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage6);
							SendMessage(owins, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage10);
							xwin = 0;
							owin = 0;
							reset();
						}
					}
					break;
			}

			break;
		case WM_CREATE:
			loadImages();
			AddControls(hWnd);
			break;
		
		case WM_DESTROY:
			PostQuitMessage(0);
			break;
		default:
			return DefWindowProcW(hWnd, msg, wp, lp);
	}
}

void	AddControls(HWND hWnd)
{
	hBut = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 100, 50, 100, 100, hWnd, (HMENU)BUTTON_ONE, NULL, NULL);
	hBut2 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 200, 50, 100, 100, hWnd, (HMENU)BUTTON_TWO, NULL, NULL);
	hBut3 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 300, 50, 100, 100, hWnd, (HMENU)BUTTON_THREE, NULL, NULL);
	
	hBut4 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 100, 150, 100, 100, hWnd, (HMENU)BUTTON_FOUR, NULL, NULL);
	hBut5 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 200, 150, 100, 100, hWnd, (HMENU)BUTTON_FIVE, NULL, NULL);
	hBut6 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 300, 150, 100, 100, hWnd, (HMENU)BUTTON_SIX, NULL, NULL);
	
	hBut7 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 100, 250, 100, 100, hWnd, (HMENU)BUTTON_SEVEN, NULL, NULL);
	hBut8 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 200, 250, 100, 100, hWnd, (HMENU)BUTTON_EIGHT, NULL, NULL);
	hBut9 = CreateWindowW(L"Button", NULL, WS_VISIBLE | WS_CHILD | BS_BITMAP, 300, 250, 100, 100, hWnd, (HMENU)BUTTON_NINE, NULL, NULL);
	turntell = CreateWindowW(L"static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, 200, 350, 100, 100, hWnd, NULL, NULL, NULL);
	xwins = CreateWindowW(L"static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, 100, 350, 100, 100, hWnd, NULL, NULL, NULL);
	owins = CreateWindowW(L"static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, 300, 350, 100, 100, hWnd, NULL, NULL, NULL);
}

void loadImages()
{
	hGenerateImage = (HBITMAP)LoadImageW(NULL, L"x.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage2 = (HBITMAP)LoadImageW(NULL, L"o.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage3 = (HBITMAP)LoadImageW(NULL, L"Tx.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage4 = (HBITMAP)LoadImageW(NULL, L"To.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage5 = (HBITMAP)LoadImageW(NULL, L"back.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage6 = (HBITMAP)LoadImageW(NULL, L"xwin0.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage7 = (HBITMAP)LoadImageW(NULL, L"xwin1.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage8 = (HBITMAP)LoadImageW(NULL, L"xwin2.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage9 = (HBITMAP)LoadImageW(NULL, L"xwin3.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage10 = (HBITMAP)LoadImageW(NULL, L"owin0.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage11 = (HBITMAP)LoadImageW(NULL, L"owin1.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage12 = (HBITMAP)LoadImageW(NULL, L"owin2.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
	hGenerateImage13 = (HBITMAP)LoadImageW(NULL, L"owin3.bmp", IMAGE_BITMAP, 100, 100, LR_LOADFROMFILE);
}

void reset()
{
	rem[0] = 0;
	rem[1] = 0;
	rem[2] = 0;
	rem[3] = 0;
	rem[4] = 0;
	rem[5] = 0;
	rem[6] = 0;
	rem[7] = 0;
	rem[8] = 0;
	
	one = 0;
	two = 0;
	three = 0;
	four = 0;
	five = 0;
	six = 0;
	seven = 0;
	eight = 0;
	nine = 0;

	oneo = 0;
	twoo = 0;
	threeo = 0;
	fouro = 0;
	fiveo = 0;
	sixo = 0;
	seveno = 0;
	eighto = 0;
	nineo = 0;

	turn = 0;
	nowin = 0;
	SendMessage(hBut, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut2, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut3, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut4, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut5, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut6, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut7, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut8, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(hBut9, BM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
	SendMessage(turntell, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hGenerateImage5);
}