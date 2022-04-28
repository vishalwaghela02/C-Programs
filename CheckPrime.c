#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{

    int iCnt = 0;
    int iNumCnt = 0;
    
    

    if (iNo < 0)
    {
        iNo =- iNo;
    }

    for(iCnt =2; iCnt < iNo; iCnt++)
    {

        if(iNo % iCnt == 0)
        {
            iNumCnt++;
        }
        
    }
        if(iNumCnt == 0)
        {
            return true;
        }
        else
        {
            return false;
        }


}


int main()
{

    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
      printf("%d is a prime number\n",iValue);  

    }
    else
    {
        printf("%d is a not prime number\n",iValue);

    }

    return 0;


}
