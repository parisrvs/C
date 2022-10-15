
void sortIntegers(int* array, int count)
{
    int temp;
    for(int c=0; c<(count); c++)
        for(int d=c+1; d<(count); d++)
        {
            if (*(array+c) > *(array+d))
            {
                temp = *(array+d);
                *(array+d) = *(array+c);
                *(array+c) = temp;
            }
        }
}

int searchInteger(int* array, int count, int value)
{
    int low = 0, high = count-1, mid;
    while(high >= low)
    {
        mid = (high+low)/2;
        if (*(array+mid) == value)
            return mid;
        else if (value > *(array+mid))
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}
