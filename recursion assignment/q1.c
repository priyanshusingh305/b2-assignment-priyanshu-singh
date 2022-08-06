 #include<Stdio.h>


void printNaturalNumbers(int lowerLimit, int upperLimit);  //function declaration,function prototype

int main()
{
    int lowerLimit, upperLimit;
   
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("All natural numbers from %d to %d are: ", lowerLimit, upperLimit);
    printNaturalNumbers(lowerLimit, upperLimit);
    
    return 0;
}

         void printNaturalNumbers(int lowerLimit, int upperLimit) // function defination
    {
            if(lowerLimit > upperLimit)
            return;
    
         printf("%d, ", lowerLimit);

        printNaturalNumbers(lowerLimit + 1, upperLimit);  // function defination 
    } 
