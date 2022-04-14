partition(l, h) {
	int pivot = a[l];
	int i = l; j = h;
	while (i < j) {
		do {
			i++;
			while (a[i] <= pivot;)
			}
		do {
			j++;
			while (a[j] > pivot;)
			}
		if (i < j) {
			swap(a[i], a[j]);
		}

	}
	swap(a[l], a[j]);
	return j;
}
//quicksort
Quicksort(l, h) {
	if (l < h)
	{
		j = partition(l, h)
		    Quicksort(l, j - 1);
		Quicksort(j + 1, h);
	}
}