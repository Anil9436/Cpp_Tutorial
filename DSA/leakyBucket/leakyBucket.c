#include<stdio.h>

void leakyBucket(int bucket_size,int sizeleft,int no_of_queries,int input_packetSize, int OutputSize,int storage)
{
    for(int i=0;i < no_of_queries;i++)
    {
        sizeleft = bucket_size - storage;
        if(input_packetSize<sizeleft){ storage += input_packetSize;}
        else{printf("PacketLoss %d",input_packetSize);}
        storage -= OutputSize;
    }
}

int main()
{
    leakyBucket(10,0,4,4,1,0);
}