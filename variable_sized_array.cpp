    #include <iostream>
    #include <vector>
    
    int main() {
        int n, q;
        std::cin>>n>>q;
        std::vector<std::vector<int>> a(n);

        for(int i=0; i<n; i++)
        {
            int k;
            std::cin>>k;
            std::vector<int> arr(k);
            for (int j=0; j<k; j++)
            {
                std::cin>>arr[j];
            }
            a[i]= arr;
        }
        while(q--)
        {  //runs a loop from q to q-1 in decreasing order
        int i, j;
        std::cin>>i>>j;
        std::cout<<a[i][j]<<std::endl;
        }
        return 0;
    }

/*hackerank question

can also be done using pointers(pointer to array of pointers,
then using those pointers, as each sub-array

int** a= new int* [n]; //allocating memory to array of pointers

int* arr= new int [k];  //allocating memory for each array within array(sub-array) 

remember to deallocate the memory if new dynamic allocation like this */
