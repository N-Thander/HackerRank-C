

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) 
{
    int sum = 0;
    char boy = 'b';
    char girl = 'g';
    
    if (gender == boy)
    {
        for (int i = 0 ; i<= number_of_students; i = i+2)
        {
            sum = sum + marks[i];                        
        }
          
    }
    else if (gender == girl)
    {
        for (int j = 1; j<= number_of_students; j = j+2) 
        {
            sum = sum + marks[j];
        }
        
    }
    
    return sum;
}
