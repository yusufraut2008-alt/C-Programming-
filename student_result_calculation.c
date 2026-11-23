#include<stdio.h>
#include<math.h>

int main()
{
	float sub_1,sub_2,sub_3,sub_4,sub_5,total_percentage,total_marks;
	printf("Enter all subjects marks:\n");
	scanf("%f%f%f%f%f",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);
	total_marks=(sub_1+sub_2+sub_3+sub_4+sub_5);
	total_percentage=((total_marks)/500)*100;
	printf("Total_marks:%f\n",total_marks);
	printf("Total_percentage:%f\n",total_percentage);
	{
		if(sub_1<40 || sub_2<40 || sub_3<40 || sub_4<40 || sub_5<40)
		printf("Result:fail\n");
		else
		printf("Result:pass\n");
	}
	{
		if(total_percentage>75)
		printf("Grade:Distinction\n");
		else if(total_percentage>=60 && total_percentage<75)
		printf("Grade:First Division\n");
		else if(total_percentage>=50 && total_percentage<60)
		printf("Grade:Second Division\n");
		else
		printf("Grade:Third Division\n");
	}
	return 0;
}