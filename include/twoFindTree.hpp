template <class T> class twoFindTree
{
private:
    
public:
        T key;
        twoFindTree& left;
        twoFindTree& right;
        twoFindTree& parent;
        twoFindTree(T key);
        ~twoFindTree();
        void print();
        twoFindTree& search(T k);
        twoFindTree& gmin();
        twoFindTree& gmax();
        twoFindTree& successor();
        twoFindTree& ist(twoFindTree& object);
        twoFindTree& dlt();
};