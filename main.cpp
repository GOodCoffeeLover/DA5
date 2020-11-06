#include<iostream>
#include"SuffixTrie"

int main(){
	std::ios::sync_with_stdio(false);
	std::string word, text;
	std::getline(std::cin, word);
	std::getline(std::cin, text);
	SuffixTrie suf(word);
	std::vector<unsigned int> ans;
	suf.overlap_statistic(ans, text);
	for(int i=0; i<ans.size(); ++i)
		if(ans[i]==word.size())
			std::cout<<i+1<<std::endl;
	return 0;
}