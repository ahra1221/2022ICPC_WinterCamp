<h4> 1회차 시간복잡도와 정렬</h4>

⭐B_11656<br>
vector 정렬<br>
오름차순 정렬 sort(vector.begin(), vector.end());<br>
내림차순 정렬 sort(vector.begin(), vector.end(), greater<int>());<br>
사용자 지정 정렬 sort(vector.begin(), vector.end(), compare);<br>
  -> bool compare(string a, string b){ return a.size() < b.size(); }
<br><br>

⭐D_18870<br>
map : 균형이진트리로 구현, key 값에 따라 정렬되어 저장<br>
unordered_map : 해시방식으로 구현, value 값에 따라 정렬되어 저장<br>
-> element 개수가 작은 경우 unordered_map이 속도가 좀 더 빠르다.<br><br>
