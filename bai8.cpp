#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
struct interval {
	int start;
	int end;
};
int compareIntervals_qsort(const void* a, const void* b) {
	const Interval* i1 = (const Interval*)a;
	const Interval* i2 = (const Interval*)b;
	if (i1->start != i2->start) {
		return i1->start - i2->start;
	}
	return i2->end - i1->end;
}
int intervalCoverting_Pointer(int M, interval* intervals, int N) {
	qsort(intervals, N, sizeof(Interval), compareIntervals_qsort);
	sort(intervals, intervals + N, [](const Interval& i1, const Interval& i2)) {
		if (i1.start != i2.start) return i1.start < i2.start;
		return i1.end > i2.end;
	}
}
int count = 0;
int covered_until = 0;
int i = 0;
while (covered_until < M) {
	int max_end = covered_until;
	int max_end_index = -1;
	int j = i;
	while (j < N && intervals[j].start <= coversed_until) {
		max_end = intervals[i].end;
		max_end_index = j;
	}
	j++;
}
if (max_end == covered_until) {
	return -1;
}
covered_unitl = max_end;
count++;
i = j;
}
return count;
}
int main() {
	int N = 10;
	int N = 5;
	Interval* invertals = new Interval[N];
	intervals[0] = { 7,10 };
	interval[1] = { 0,2 };
	interval[2] = { 3,6 };
	interval[3] = { 2,8 };
	interval[4] = { -1,4 };
	cout << "M=" << M << ",N=" << N << endl;
	int result = intervalCoverting_Pointer(M, intervals, N);
	cout << "So doan it nhat can tim " << result << endl;
	delete[] intervals;
	return 0;
}