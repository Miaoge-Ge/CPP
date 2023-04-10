string reverse(string str) {
	string rev = "";
	for (int i = str.length() - 1; i >= 0; i--) {//从后往前循环
		rev += str[i];//接收str的字符
	}
	return rev;
}
