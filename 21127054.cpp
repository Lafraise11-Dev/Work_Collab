// 21127054.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

void nhapthoidiem(int &gio, int &phut, int &giay);
void nhapthoigian(long &thoi_gian);
long thoigiantu0h(int gio, int phut, int giay);
long thoigiangiuahaithoidiem(int gio1, int phut1, int giay1, int gio2, int phut2, int giay2);
void thoidiemkhibietthoigian(long thoi_gian_cho_biet,int &gio3,int &phut3, int &giay3);
void thoidiem_gannhau_nhat(int gioA,int phutA,int giayA, int gioB, int phutB, int giayB, int gioC, int phutC, int giayC);

int main()
{
	printf("\nChuc nang cua chuong trinh: ");
	printf("\nBai 1: Xac dinh thoi gian troi qua tu 00:00:00 den thoi diem da nhap.");
	printf("\nBai 2: Xac dinh thoi gian troi qua giua 2 thoi diem.");
	printf("\nBai 3: Xac dinh thoi diem khi biet thoi gian troi qua tu 00:00:00/");
	printf("\nBai 4: Tim hai thoi diem gan nhau nhat trong 3 thoi diem A,B,C.");
	int luachon;
	do
	{
		printf("\nNhap lua chon: ");
		scanf("%d", &luachon);

		switch (luachon)
		{
		case 1:
		{
			printf("Bai tap 1: \n");
			int gio, phut, giay;
			printf("Nhap thoi diem: \n");
			nhapthoidiem(gio, phut, giay);
			int thoi_gian = thoigiantu0h(gio, phut, giay);
			printf("Thoi gian da troi qua tu 00:00:00 den thoi diem vua nhap la: %d giay.", thoi_gian);
			break;
		}
		case 2:
		{
			printf("\nBai tap 2: ");
			int gio1, phut1, giay1;
			int gio2, phut2, giay2;
			printf("\nNhap thoi diem thu 1: \n");
			nhapthoidiem(gio1, phut1, giay1);
			printf("\nNhap thoi diem thu 2: \n");
			nhapthoidiem(gio2, phut2, giay2);
			long thoi_gian_hai_thoi_diem = thoigiangiuahaithoidiem(gio1, phut1, giay1, gio2, phut2, giay2);
			printf("Thoi gian giu hai thoi diem da nhap la: %li giay.", thoi_gian_hai_thoi_diem);
			break;
		}
		case 3:
		{
			printf("\nBai tap 3: ");
			long thoi_gian_cho_biet = 0;
			int gio3, phut3, giay3;
			printf("\nNhap thoi gian de tinh thoi diem tu 00:00:00: ");
			nhapthoigian(thoi_gian_cho_biet);
			thoidiemkhibietthoigian(thoi_gian_cho_biet, gio3, phut3, giay3);
			printf("Thoi gian da nhap: %li", thoi_gian_cho_biet);
			printf("\nThoi diem tu 00:00:00 den thoi gian da nhap la: Gio: %d Phut: %d, Giay: %d.", gio3, phut3, giay3);
			break;
		}
		case 4:
		{
			printf("\nBai tap 4: ");
			int gioA, phutA, giayA;
			int gioB, phutB, giayB;
			int gioC, phutC, giayC;
			printf("\nNhap 3 thoi diem: ");
			printf("\nNhap thoi diem A: ");
			nhapthoidiem(gioA, phutA, giayA);
			printf("\nNhap thoi diem B: ");
			nhapthoidiem(gioB, phutB, giayB);
			printf("\nNhap thoi diem C: ");
			nhapthoidiem(gioC, phutC, giayC);
			thoidiem_gannhau_nhat(gioA, phutA, giayA, gioB, phutB, giayB, gioC, phutC, giayC);
			break;
		}
		}
	} while (luachon == 1 || luachon == 2 || luachon == 3 || luachon == 4);
	return 0;
	
}

void nhapthoidiem(int &gio, int &phut, int &giay)
{
	do
	{
		printf("Nhap gio: ");
		scanf_s("%d", &gio);
		if (gio < 0 || gio > 24)
			printf("Gio co gia tri tu 0 den 24. Xin nhap lai.\n");
	} while (gio < 0 || gio > 24);

	do
	{
		printf("Nhap phut: ");
		scanf_s("%d", &phut);
		if (phut < 0 || phut > 60)
			printf("Phut co gia tri tu 0 den 60. Xin nhap lai.\n");
	} while (phut < 0 || phut > 60);

	do
	{
		printf("Nhap giay: ");
		scanf_s("%d", &giay);
		if (giay < 0 || giay > 60)
			printf("Giay co gia tri tu 0 den 60. Xin nhap lai.\n");
	} while (gio < 0 || gio > 60);
}

void nhapthoigian(long &thoi_gian)
{
	do
	{	
		printf("Nhap vao thoi gian: ");
		scanf_s("%li", &thoi_gian);
		if (thoi_gian < 0 || thoi_gian > 86400)
			printf("Thoi gian co gia tri tu 0 den 86400. Xin nhap lai.\n");
	} while (thoi_gian < 0 || thoi_gian > 86400);
}

long thoigiantu0h(int gio, int phut, int giay)
{
	long thoigian = 0;
	thoigian = gio * 3600 + phut * 60 + giay;
	return thoigian;
}

long int thoigiangiuahaithoidiem(int gio1, int phut1, int giay1, int gio2, int phut2, int giay2)
{
	long thoi_gian_mot = thoigiantu0h(gio1, phut1, giay1);
	long thoi_gian_hai = thoigiantu0h(gio2, phut2, giay2);
	long thoigian_giua_haithoidiem = abs(thoi_gian_hai - thoi_gian_mot);
	return thoigian_giua_haithoidiem;
}

void thoidiemkhibietthoigian(long thoigianchobiet, int& gio3, int& phut3, int& giay3)
{
	gio3 = thoigianchobiet / 3600;
	thoigianchobiet = thoigianchobiet % 3600;
	phut3 = thoigianchobiet / 60;
	giay3 = thoigianchobiet % 60;
}

void thoidiem_gannhau_nhat(int gioA, int phutA, int giayA, int gioB, int phutB, int giayB, int gioC, int phutC, int giayC)
{
	long  thoigianAB = thoigiangiuahaithoidiem(gioA, phutA, giayA, gioB, phutB, giayC);
	long  thoigianAC = thoigiangiuahaithoidiem(gioA, phutA, giayA, gioC, phutC, giayC);
	long  thoigianBC = thoigiangiuahaithoidiem(gioB, phutB, giayB, gioC, phutC, giayC);

	long int thoidiemgannhaunhat = thoigianAB;
	if (thoigianAC < thoidiemgannhaunhat)
	{
		thoidiemgannhaunhat = thoigianAC;
	}
	else if (thoigianBC < thoidiemgannhaunhat)
	{
		thoidiemgannhaunhat = thoigianBC;
	}

	if (thoidiemgannhaunhat == thoigianAB)
	{
		printf("Hai thoi diem gan nhau nhat trong ba thoi diem la thoi diem A va thoi diem B.");
	}
	else if (thoidiemgannhaunhat == thoigianAC)
	{
		printf("Hai thoi diem gan nhau nhat trong ba thoi diem la thoi diem A va thoi diem C.");
	}
	else
	{
		printf("Hai thoi diem gan nhau nhat trong ba thoi diem la thoi diem B va thoi diem C.");
	}
}

