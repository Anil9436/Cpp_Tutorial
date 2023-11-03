
#include "leakybucket.hpp"

void leakyBucket::printAll()
{
    std::cout<<this->bucket_size<<" "<<this->input_packet_size<<" "<<this->no_of_queries<<" "<<this->output_packet_size<<" "<<this->size_left<<" "<<this->storage<<std::endl;
}
void leakyBucket::leakybucket()
{
    // running the for loop as per the number of queries mentioned by the user
    for(int i=0;i<this->no_of_queries;i++)
    {
        // we are assigning the size_left to the bucket size 
        this->size_left = this->bucket_size - this->storage;
        // we are checking the if condition inputpacket size is less than the size-left
        if(this->input_packet_size <= this->size_left){
            // here we are incrementing the count of the initial count of packets
            this->storage += this->input_packet_size;
        }
        else{
            // we are making the packet as loss if the packet size is more than the sizeleft
            std::cout<<"Packet_Loss: "<< this->input_packet_size;
        }   
        // then we are decrementing the packet count once it is went out from the bucket
        this->storage -= this->output_packet_size;
    }
}

int main()
{
    leakyBucket lk{4,0,4,1,10,0};
    lk.printAll();
    lk.leakybucket();
}