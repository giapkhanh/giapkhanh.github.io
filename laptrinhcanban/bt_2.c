#include <stdio.h>
#include <math.h>

int main () {
	//Bai 5
	int soa, sob, soc;
	printf("Nhap a:");
	scanf("%d", &soa);
	printf("Nhap b:");
	scanf("%d", &sob);
	printf("Nhap c:");
	scanf("%d", &soc);
	
	float delta = sob*sob - (4*soa*soc);
	if (delta < 0) {
		printf("Phuong trinh vo nghiem\n");
	}
	else if (delta > 0) {
		printf("x1=%f\n", (float) ((-sob - sqrt(delta)) / (2*soa)) );
		printf("x1=%f\n", (float) ((-sob + sqrt(delta)) / (2*soa)) );

	}
	else if (delta == 0) {
		printf("Phuong trinh co nghiem kep:x=%f\n", (float) -sob/(2*soa));
	}

	//Bai 6
	int a,b,c,d,e,f;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("Nhap c:");
	scanf("%d", &c);
	printf("Nhap d:");
	scanf("%d", &d);
	printf("Nhap e:");
	scanf("%d", &e);
	printf("Nhap f:");
	scanf("%d", &f);

	if  (((a==0) && (b==0) && (c != 0)) || ((d==0) && (e==0) && (f != 0))) {
		printf("He pt vo nghiem\n");
	}

	else if (((a==0) && (b==0) && (c == 0)) || ((d==0) && (e==0) && (f == 0))) {
		printf("He pt co vo so nghiem\n");
	}
	else {
		printf("x=%f\n", c*e-f*b);
		printf("y=%f\n", a*f-d*c);
	}
	//Bai 7
	float diem;
	printf("Nhap diem:");
	scanf("%f", &diem);
	if (diem < 5) {
		printf("Yeu\n");
	}
	else if ((diem >= 5) && (diem < 7)) {
		printf("Trung binh\n");
	}
	else if ((diem >= 7) && (diem < 8)) {
		printf("Kha\n");
	}
	else if ((diem >= 8) && (diem < 9)) {
		printf("Trung binh\n");
	}
	else if (diem >= 9) {
		printf("Trung binh\n");
	}

	//Bai 8
	int canha, canhb, canhc;
	printf("nhap a:");
	scanf("%d", &canha);
	printf("nhap b:");
	scanf("%d", &canhb);
	printf("nhap c:");
	scanf("%d", &canhc);
	
	if (!( ((canha+canhb) >= canhc) || ((canhb+canhc) >= canha) || ((canhc+canha) >= canhb) )) {
		printf("Khong phai la canh cua tam giac\n");
	}
	
	
	else {
		//vuong
		if ((canha*canha + canhb*canhb == canhc*canhc) || (canhb*canhb + canhc*canhc == canha*canha) || (canhc*canhc + canha*canha == canhb*canhb)) {
		printf("Tam giac vuong\n");
		}	
		//vuong can
		else if ( ((canha*canha + canhb*canhb == canhc*canhc) || (canhb*canhb + canhc*canhc == canha*canha) || (canhc*canhc + canha*canha == canhb*canhb)) && ( (canha==canhb) || (canhb==canhc) || (canhc==canha) )){
		printf("Tam giac vuong can\n");
		}
		//deu
		else if ((canha==canhb) && (canhb==canhc) && (canhc==canha)) {
		printf("Tam giac deu\n");
		}
		else {
			printf("Tam giac thuong\n");
		}

	}
	//Bai 9
	int nam, thang;
	printf("Nhap nam:");
	scanf("%d", &nam);
	printf("Nhap thang:");
	scanf("%d", &thang);
	int i;
	int mon_31[] = {1,3,5,7,8,10,12};
	int m31_length = sizeof(mon_31) / sizeof(mon_31[0]);
	int mon_30[] = {4,6,9,11};
	int m30_length = sizeof(mon_30) / sizeof(mon_30[0]);
	for (i = 0; i < m31_length; i++)
	{
		if (thang == mon_31[i]) {
			printf("Thang co 31 ngay\n");
		}
	}
	for (i = 0; i < m30_length; i++)
	{
		if (thang == mon_30[i]) {
			printf("Thang co 30 ngay\n");
		}
	}
	if (thang == 2) {
		printf("Thang co 28 hoac 29 ngay\n");
	}
	return 0;
}