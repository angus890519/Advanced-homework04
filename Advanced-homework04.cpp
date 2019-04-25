/* 計算機概論實務-進階練習作業-作業4 */
/* 製作人：郭柏鋒 */
/* 完成時間：2019/04/10 21:31 */  
#include<stdio.h> //定義函示庫 
int main(){
	int day, month, year, sum, leap; //定義 
	printf("計算機概論實務-進階練習作業-作業4\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/04/10 21:31\n");
	printf("-----------------------------------\n");	
	printf("請輸入西元月份及日期：");  
	scanf("%d%d%d",&year,&month,&day); //輸入 
	printf("-----------------------------------\n");
	switch(month)
	{   
		case 1:sum = 0;break;    //因直接加日期所以01月累積目前為0天 
		case 2:sum = 31;break;   //因直接加日期所以02月累積目前為31天  
		case 3:sum = 59;break;   //因直接加日期所以03月累積目前為59天 
		case 4:sum = 90;break;   //因直接加日期所以04月累積目前為90天 
		case 5:sum = 120;break;  //因直接加日期所以05月累積目前為120天 
		case 6:sum = 151;break;  //因直接加日期所以06月累積目前為151天 
		case 7:sum = 181;break;  //因直接加日期所以07月累積目前為181天 
		case 8:sum = 212;break;  //因直接加日期所以08月累積目前為212天 
		case 9:sum = 243;break;  //因直接加日期所以09月累積目前為243天 
		case 10:sum = 273;break; //因直接加日期所以10月累積目前為273天 
		case 11:sum = 304;break; //因直接加日期所以11月累積目前為304天
		case 12:sum = 334;break; //因直接加日期所以12月累積目前為334天
		default:printf("data error!");break;//如果月份不在1~12中，顯示錯誤  
	}
	    sum = sum + day;//直接加日期
	if(year%400==0||(year%4==0&&year%100!=0))
	{  //判斷是不是閏年 
		leap = 1; //如果是閏年的話,leap=1 
	}
	else{
		leap = 0; //如果不是閏年的話,leap=0
	}
	if(leap == 1&&month > 2){  //判斷是閏年同時要是2月
		sum++; //加上1天 
	}
	printf("這一天是這一年的第%d天",sum);
}

