int main(int argc, char *argv[])
{
    std::vector<char> temp = dtt::b64decode(std::string(argv[1]));
    std::cout<<std::string(temp.begin(),temp.end())<<std::endl;
    return 0;
}