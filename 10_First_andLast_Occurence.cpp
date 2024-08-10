pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  int first(vector<int> & arr, int n, int k) {
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s < e) {
      if (arr[m] == k) {
        ans1 = m;
        e = m - 1;
      } else if (arr[m] > k) {
        e = m - 1;
      } else if (arr[m] < k) {
        s = m + 1;
      }
      m = s + (s - e) / 2;
    }
    return ans;
  }

  int last(vector<int> & arr, int n, int k) {
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    int ans = -1;
    while (s < e) {
      if (arr[m] == k) {
        ans1 = m;
        s = m + 1;
      } else if (arr[m] > k) {
        e = m - 1;
      } else if (arr[m] < k) {
        s = m + 1;
      }
      m = s + (s - e) / 2;
    }
    return ans;
  }

  pair<int, int> p;
  p.first = first(arr, n, k);
  p.second = last(arr, n, k);

  return p;
}
