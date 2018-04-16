//============================================================================
// Name        : oneFourth.cpp
//============================================================================

#include <iostream>

int main() {
	int s;
	std::cout << "Specify the size (should be an even number):";
	std::cin >> s;
	char basic [s/2][s/2];
	for (int i=0;i<s/2;i++){
		for(int j=0; j<s/2;j++){
			if(i==0||i==j){
				basic[i][j]=basic[i][0] = '#';
			}
			else{
				basic[i][j]=' ';
			}
		}
	}

	for (int i=0;i<s;i++){
		for(int j=0; j<s;j++){
			if(i<s/2 && j<s/2){
				std::cout << basic[i][j];
			}else if(i<s/2 && j>=s/2){
				std::cout << basic[i][s-j-1];
			}else if(i>=s/2 && j<s/2){
				std::cout << basic[s-i-1][j];
			}else{
				std::cout << basic[s-j-1][s-i-1];
			}

		}
		std::cout << '\n';
	}
}
