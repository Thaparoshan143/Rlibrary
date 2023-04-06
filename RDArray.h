
namespace Roshan
{
    class RDArrint
    {
        RDArrint();
        ~RDArrint();

        void Push();

        private:
        void AllocateInt(unsigned int size);
        int *root;
        unsigned int currentLength;
    };
}