#include<stdio.h>
int collatzsequence(int i)
{
    int length=1;
    while (i!=1) //check number is not equal to one 
    {
        if (i%2==0)// check either the number is even or odd i used if else in it 
        {
            i=i/2;
        }
        else
        {
            i=3*i+1;
        }
        length++;
    }
    //return the length which have maximum
    return length;
}
int longestcollatzsequence(int n)
{
    int i=1,length,maximum=0,longestnumbersequence=0;
    // Here loop iterates upto the number which user enter 
    while (i<n)
    {   
        // Here is function used to find longest collatz sequence length
        length=collatzsequence(i);

        // Here condition is checked that if the next number has maximum length then which number has maximum length
        if (length>maximum)         
        {
            maximum=length;
            longestnumbersequence=i;
        }
        i++;
    }
    // Here the number is print which number has longest sequence 
    printf("Longest sequence is produced by the starting number %d",longestnumbersequence);
    return maximum;
}

int main()
{
    int n=0,number;
    // Here user enter the upper limit
    printf("Enter the upper limit\n");
    scanf("%d", &n);

    // Here the function is called to find the number which have longest collatz sequence
    number=longestcollatzsequence(n);

    // Here the number's longest length is printed
    printf(", with a length of %d", number);
    return 0;
}