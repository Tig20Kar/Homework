#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int findAlfIndex(const char a,const std::string& alf){
    for(int i = 0;i<alf.size();i++){
        if(alf[i] == a){
            return i;
        }
    }

    return -1;
}

std::string caesar(const std::string& text, int shift){
    std::string alf = {"abcdefghijklmnopqrstuvwxyz"};
    std::string caesar;

    for(int i = 0;i<text.size();i++){

        if(text[i] != ' '){

            caesar += alf[findAlfIndex(text[i],alf) + (shift < 0 ? alf.size() - shift : shift)];
        }
    }

    return caesar;
}


std::string compress(const std::string& s){
    std::string res;

    for(int i = 0;i<s.size();i++){

        if(!std::count(res.begin(),res.end(),s[i])){
            int count = std::count(s.begin(),s.end(),s[i]);
            res += s[i] + std::to_string(count);
        }
    }

    return res;
}

std::string expand(const std::string& s){

    std::string res;

    for (int i = 0; i < s.size(); i += 2)
    {
        char a = s[i];
        int count = s[i + 1] - '0';

        for(int k = 0;k<count;k++){
            res += a;
        }
    }



    return res;
}

int main(){

    // std::cout << caesar("aaabccdddd",3);
    // std::cout << compress("aaabccdddd");
    std::cout << expand("a5b3");


}


