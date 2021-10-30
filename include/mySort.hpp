template <class T>
class mySort{
    public:
        T *data;
        mySort();
        mySort(T *data);
        ~mySort();
        void SelectSort(int a);
        void BubbleSort(int a);
        void QuickSort(int a);
};