#include<iostream>

class leakyBucket{
    int no_of_queries{};
    int storage{};
    int input_packet_size{};
    int output_packet_size{};
    int bucket_size{};
    int size_left{};
    public:
        leakyBucket(int queries,int count,int ipsize,int opsize,int bsize,int sleft)
        : no_of_queries{queries}
        , storage{count}
        , input_packet_size{ipsize}
        , output_packet_size{opsize}
        , bucket_size{bsize}
        , size_left{sleft}{}
        void printAll();
        void leakybucket();
};