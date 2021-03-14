 
 /*
    Problem statement :
 Accept number and poition from user and toggle the bit at that poisition.
 
 Input :
 No: 56
 Poition : 4
 
 Binary :    0000   0000    0000    0000    0000    0000    0011    1000
 Output :   48
 
 0000   0000    0000    0000    0000    0000    0011    0000
    
 Input :
 No : 35
 Position : 4
 
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output :  43
 0000    0000    0000    0000    0000    0000    0010    1011
 */
 
 #include<stdio.h>
 
 int ToggleBit(int iValue,int iPos)
 {
    int iMask = 0x00000001;           //temp mask desing
	int iResult = 0;
	
	if(iValue < 0)
	{
	   iValue = -iValue;
	}
	
	if((iPos < 0)|| (iPos > 32))
	{
	   return -1;
	}
	
	iMask = iMask << (iPos-1);     //when we know the possition then redesing the mask
	
	iResult = iValue ^ iMask;
	
	return iResult;
} 
 
  int main()
 {
  int iNo = 0;
  int iPos = 0;
  int iRet = 0;
  
  printf("enter the number \n");
  scanf("%d",&iNo);
  
  printf("Enter the possition \n");
  scanf("%d",&iPos);
  
  iRet = ToggleBit(iNo,iPos);
  
  printf("modified no after bit toggle is : %d",iRet);
 
 return 0;
 }
 
 /*
 
 output
 
 enter the number
56
Enter the possition
4
modified no after bit toggle is : 48
D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\ToggleBit>myexe
enter the number
35
Enter the possition
4
modified no after bit toggle is : 43
D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\ToggleBit>myexe
enter the number
24
Enter the possition
2
modified no after bit toggle is : 26

*/