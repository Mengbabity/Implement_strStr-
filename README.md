# Implement_strStr-

给定两个字符串，若2在1内，返回其下标，若不存在，返回-1；若2不存在，返回0。

两层for循环。外层循环条件i<n1-n2+1;内层，若1[i+j]不等于2[j]，则break，即停止内层循环，继续外层循环；j==n2，可返回i值。

小tip：当for循环终止时，i还是会++一次。