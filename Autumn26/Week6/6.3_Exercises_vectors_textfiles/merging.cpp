#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int i = 0;
    int j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            merged.push_back(v1[i]);
            i++;
        } else {
            merged.push_back(v2[j]);
            j++;
        }
    }

    // Append remaining elements from v1
    while (i < v1.size()) {
        merged.push_back(v1[i]);
        i++;
    }

    // Append remaining elements from v2
    while (j < v2.size()) {
        merged.push_back(v2[j]);
        j++;
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    std::vector<int> v12;
    std::vector<int> v22;
    std::vector<int> out2;

    std::vector<int> expected_output2;
    v12 = {1, 2, 3, 4, 5, 6};
    v22 = {4, 6, 10};
    expected_output2 = {1, 2, 3, 4, 4, 5, 6, 6, 10};
    
    merge_vectors_int(v1, v2, out);
    merge_vectors_int(v12, v22, out2);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
        for (int i = 0; i < out.size(); i++){
            std::cout << out[i] << " ";
        }
    }
    if(out2 == expected_output2){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
        for (int i = 0; i < out2.size(); i++){
            std::cout << out2[i] << " ";
        }
    }
}