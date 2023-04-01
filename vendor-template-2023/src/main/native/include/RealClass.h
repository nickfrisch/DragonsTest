#pragma once

namespace dragons{
class RealClass
{
    public:
        RealClass(int arg);

        void PrintArg();
        int GetArg() const {return m_arg;}

    private:
        int m_arg;
};
}