    #include<iostream>  
    using namespace std;  
    int sum(int x, int y, int z=0, int w=0) // Here there are two values in the default arguments   
    {    
        return (x + y + z + w); // return sum of all parameter values  
    }  
    int main()  
    {  
        cout << sum(10, 15) << endl;  
        cout << sum(10, 15, 25) << endl;   
        cout << sum(10, 15, 25, 30) << endl;   
        return 0;  
    }  
