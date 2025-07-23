#include<stdio.h>

int main()
{
  // int marks1, marks2, marks3, totalMarks, percentage;

  // printf("Enter the marks:\n");
  // scanf("%d %d %d", &marks1, &marks2, &marks3);

  // totalMarks = marks1 + marks2 + marks3;
  // percentage = (totalMarks / 300) * 100;

  // if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && totalMarks >= 40)
  // {
  //   printf("You are pass %d", totalMarks);
  // }
  // else{
  //   printf("You are fail");
  // }


  // int salary, tax;

  // printf("Enter your income: ");
  // scanf("%d", &salary);

  // tax = salary / 100;

  // if (salary < 250000)
  // {
  //   printf("no tax paid");
  // }
  // else if (salary >= 250000 && salary < 500000)
  // {
  //   printf("5x tax paid %d", tax*5);
  // }
  // else if (salary >= 500000 && salary < 1000000)
  // {
  //   printf("20x tax paid %d", tax*20);
  // }
  // else if (salary > 1000000)
  // {
  //   printf("30x tax paid %d", tax*30);
  // }
  



  // int years;

  // printf("Enter the year: ");
  // scanf("%d", &years);

  // if (years % 4 == 0)
  // {
  //   printf("This year is leap year!");
  // }
  // else
  // {
  //   printf("This year is not leap year");
  // }


  /* char character;

  printf("Enter the character: ");  
  scanf("%c", &character);

  if (character >= 'a' && character <= 'z')   // 97 to 122
  {
    printf("You character is lowercase character!");
  }
  else if (character >= 'A' && character <= 'Z')  // 65 to 90
  {
    printf("You character is uppercase character!");
  }
  */ 


  // int num1, num2, num3, num4;

  // printf("Enter the number: \n");
  // scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  // if (num1 > num2 && num1 > num3 && num1 > num4)
  // {
  //   printf("Num1 is the biggest number! %d", num1);
  // }

  // else if (num2 > num3 && num2 > num4)
  // {
  //   printf("Num2 is the biggest number! %d", num2);
  // }

  // else if (num3 > num4)
  // {
  //   printf("Num3 is the biggest number! %d", num3);
  // }

  // else
  // {
  //   printf("Num4 is the biggest number! %d", num4);
  // }





  // 1.write a program that checks whether a given number is positive, negative, or zero
  // int num;

  // printf("Enter you number here: ");
  // scanf("%d", &num);

  // if (num > 0)
  // {
  //   printf("your number is positive!");
  // }
  // if (num < 0)
  // {
  //   printf("your number is negative!");
  // }
  // if (num == 0)
  // {
  //   printf("your number is zero!");
  // }
  


  // 2.write a program that checks if a person is eligible to vote.
  // int age;
  // printf("Enter you age: ");
  // scanf("%d", &age);

  // if (age <= 17)
  // {
  //   printf("you are not aligible to vote!");
  // }

  // else {
  //   printf("you can vote!");
  // }



  // 3.write a program to perform basic arithmetic opertions based on user input;

  /* char opertion;
  double num1, num2, result;

  printf("Enter you first number: \n");
  scanf("%lf %lf", &num1, &num2);

  printf("Enter the opertion: ");
  scanf("%c", &opertion);

  if (opertion == '+')
  {
    result = num1 + num2;
  }
  else if (opertion == '-')
  {
    result = num1 - num2;
  }
  else if (opertion == '*')
  {
    result = num1 * num2;
  }
  else if (opertion == '/')
  {
    if (num2 != 0)
    {
      result = num1 / num2;
    }
    else
    {
      printf("Error!");
    }
    
  }
  printf("The result is %lf", result);
  */



  // 4.write a program that checks if a number is odd or even without using the modulus;
  // int num1;
  // printf("Enter the number: ");
  // scanf("%d", &num1);

  // if (num1 & 1)   // bitwise opertor
  // {
  //   printf("you number is odd");
  // }
  // else
  // {
  //   printf("you number is even");
  // }



  // 5.write a program to checks percentage and based on percentage give them grade
  // int marks1, marks2, marks3, percentage, totalMarks;

  // printf("Enter your marks: \n");
  // scanf("%d %d %d", &marks1, &marks2, &marks3);

  // totalMarks = marks1 + marks2 + marks3;
  // percentage = (totalMarks / 300.0) * 100;

  // if (percentage > 90 || percentage == 100)
  // {
  //   printf("A");
  // }
  // else if (percentage >= 80 || percentage < 89)
  // {
  //   printf("B");
  // }
  // else if (percentage >= 70 || percentage < 79)
  // {
  //   printf("C");
  // }
  // else if (percentage >= 60 || percentage < 69)
  // {
  //   printf("D");
  // }
  // else if (percentage <= 60)
  // {
  //   printf("F");
  // }


  // 6.write a program that checks if a give number is divisible by both 3 and 5;
  // int num1;
  // printf("Enter the number: ");
  // scanf("%d", &num1);

  // if (num1 % 3 == 0)
  // {
  //   printf("The number is divisible by 3");
  // }
  // else if(num1 % 5 == 0)
  // {
  //   printf("The number is divisible by 5");
  // }
  // else
  // {
  //   printf("The number is not divisible by 3 and 5 both");
  // }
  
  

  // 7.write a program to check whether a triangle is valid or not, given teh three angles;
  // int a, b, c, totalArea;

  // printf("Enter the angles: ");
  // scanf("%d %d %d", &a, &b, &c);

  // totalArea = a + b + c;

  // if (totalArea == 180)
  // {
  //   printf("the shape is triangle!");
  // }
  // else
  // {
  //   printf("The shape is not triangle");
  // }
  

  // 8.write a program to find a max and min num of two using conditional opertor

  // int num1, num2;
  // int min, max;

  // printf("Enter the number: \n");
  // scanf("%d %d", &num1, &num2);

  // min = (num1 > num2)? num2 : num1;
  // max = (num1 < num2)? num2 : num1;

  // printf("Minimum number %d\n", min);
  // printf("Maximum number %d\n", max);


  // 9. write a program that check whether a given character is a vowel or a consonant.
  char character;




  // 10.wirte a program that solves a quadratic equation using the formula x = (-b +- (b)2 - 4ac);

  int ;



  return 0;
}