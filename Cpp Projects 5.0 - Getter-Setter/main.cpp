#include <iostream>

class MainPage{
    std::string m_header;
    std::string m_title;
public:
    std::string getHeader(){return m_header;}
    void setHeader(std::string header){m_header = header;}

    std::string getTitle(){return m_title;}
    void setTitle(std::string title){m_title = title;}

};

int main()
{

    return 0;
}
