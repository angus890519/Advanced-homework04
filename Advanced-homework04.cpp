/* �p������׹��-�i���m�ߧ@�~-�@�~4 */
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/04/10 21:31 */  
#include<stdio.h> //�w�q��ܮw 
int main(){
	int day, month, year, sum, leap; //�w�q 
	printf("�p������׹��-�i���m�ߧ@�~-�@�~4\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/04/10 21:31\n");
	printf("-----------------------------------\n");	
	printf("�п�J�褸����Τ���G");  
	scanf("%d%d%d",&year,&month,&day); //��J 
	printf("-----------------------------------\n");
	switch(month)
	{   
		case 1:sum = 0;break;    //�]�����[����ҥH01��ֿn�ثe��0�� 
		case 2:sum = 31;break;   //�]�����[����ҥH02��ֿn�ثe��31��  
		case 3:sum = 59;break;   //�]�����[����ҥH03��ֿn�ثe��59�� 
		case 4:sum = 90;break;   //�]�����[����ҥH04��ֿn�ثe��90�� 
		case 5:sum = 120;break;  //�]�����[����ҥH05��ֿn�ثe��120�� 
		case 6:sum = 151;break;  //�]�����[����ҥH06��ֿn�ثe��151�� 
		case 7:sum = 181;break;  //�]�����[����ҥH07��ֿn�ثe��181�� 
		case 8:sum = 212;break;  //�]�����[����ҥH08��ֿn�ثe��212�� 
		case 9:sum = 243;break;  //�]�����[����ҥH09��ֿn�ثe��243�� 
		case 10:sum = 273;break; //�]�����[����ҥH10��ֿn�ثe��273�� 
		case 11:sum = 304;break; //�]�����[����ҥH11��ֿn�ثe��304��
		case 12:sum = 334;break; //�]�����[����ҥH12��ֿn�ثe��334��
		default:printf("data error!");break;//�p�G������b1~12���A��ܿ��~  
	}
	    sum = sum + day;//�����[���
	if(year%400==0||(year%4==0&&year%100!=0))
	{  //�P�_�O���O�|�~ 
		leap = 1; //�p�G�O�|�~����,leap=1 
	}
	else{
		leap = 0; //�p�G���O�|�~����,leap=0
	}
	if(leap == 1&&month > 2){  //�P�_�O�|�~�P�ɭn�O2��
		sum++; //�[�W1�� 
	}
	printf("�o�@�ѬO�o�@�~����%d��",sum);
}

