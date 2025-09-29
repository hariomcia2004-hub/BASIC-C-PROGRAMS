#include<stdio.h>
#include<math.h>
double recarea(double len,double wid){
	return len*wid;
}
double recperi(double len,double wid){
	return 2*(len+wid);
}
double circarea(double radius){
	return 3.14*radius*radius;
}
double triarea(double base,double height){
	return 0.5*base*height;
}
double cube(double side){
	return 6*side*side;
}
int main()
{int choice;
 printf("Select a Shape:\n");
 printf("1.RECTANGLE\n");
 printf("2.CIRCLE\n");
 printf("3.TRIANGLE\n");
 printf("4.CUBE\n");
 scanf("%d",&choice);
 
 switch(choice){
 	case 1:{
 		double len,wid;
 		printf("Enter length:");
 		scanf("%lf",&len);
 		printf("Enter width:");
 		scanf("%lf",&wid);
 		printf("Perimeter:%.2lf\n",recperi(len,wid));
 		printf("Area:%.2lf\n",recarea(len,wid));
		break;
	 }
	 case 2:{
	 	double radius;
	 	printf("Enter radius:");
	 	scanf("%lf",&radius);
	 	printf("Area:%.2lf\n",circarea(radius));
	 	printf("perimeter:%.2lf\n",2*3.14*radius);
		break;
	 }
	 case 3:{
	 	double base,height;
	 	printf("Enter base:");
	 	scanf("%lf",&base);
	 	printf("Enter height:");
	 	scanf("%lf",&height);
	 	printf("Area:%.2lf\n",triarea(base,height));
		break;
	 }
	 case 4:{
	 	double side;
	 	printf("Enter side length:");
	 	scanf("%lf",&side);
	 	printf("surface area:%.2lf\n",cube(side));
		break;
	 }
	 default:
	 	printf("Invalid Choice\n");
   }
 return 0;
 
}
