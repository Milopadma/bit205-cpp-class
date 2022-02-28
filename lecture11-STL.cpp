#include <iostream>
#include <vector> //uses vector library
using namespace std;

//standard template library
//containers (vectors, stacks, queues)




int main()
{
    vector<string> v;   
    string username;
    string password;
    string logins;

    std::cout << "Insert username here " << std::endl;
    cin >> username >> password;
    logins = username + " " + password;
    v.push_back(logins); //storing

    std::cout << "Insert username here " << std::endl;
    cin >> username >> password;
    logins = username + " " + password;
    v.push_back(logins); //storing

    std::cout << v[0] << v[1] << std::endl;


    while (true)
    {       
        std::cout << "Enter logins" << std::endl;
        std::cout << "Username Password: " << std::endl;
        string uInput1;
        string logins;
        cin >> username >> password;
        uInput1 = username + " " + password;

        for (int i = 0; i < v.size(); i++)
        {
                
            if(uInput1 != v[i]){
                std::cout << "Username or Password not matched." << std::endl;
            }
            else
            {
                std::cout << "Welcome" << std::endl;
                return 1;
            }
        
        }
    };
    
    



    return 0;
}