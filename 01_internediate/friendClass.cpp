#include<iostream>

class booksDetails;


class supplierdetails{
    private:
        std::string bookname{""};
        int yearofPub{0};
    public:
        supplierdetails(std::string name, int pub):bookname{name},yearofPub{pub}{}
        friend class booksDetails;

};

class booksDetails{
        private:
            std::string bookName{""};
            int yop{0};
        public:
            void print(const supplierdetails& details);             
};


void booksDetails::print(const supplierdetails& details)
{
    bookName = details.bookname;
    yop = details.yearofPub;
    std::cout<<bookName << " " << yop << std::endl;
}

int main()
{
    supplierdetails bookdetail{"King in the jungle", 1889};
    booksDetails details;
    details.print(bookdetail);
}

//Nor is friendship inherited. If class A makes B a friend, classes derived from B are not friends of A.