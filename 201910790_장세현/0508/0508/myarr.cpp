//myarr.ccp

#include "std.h"

MyArr::MyArr()
    :max(10), size(0)
{
    for (int i = 0; i < max; i++)
    {
        base[i] = NULL;
    }
}

bool MyArr::push_back(void* value)
{
    if (max <= size)
        return false;

    base[size] = value;
    size++;

    return true;
}

bool MyArr::erase(int idx)
{
    if (idx < 0 || idx >= size)
        return false;

    for (int i = idx; i < size - 1; i++)
    {
        base[i] = base[i + 1];
    }
    size--;

    return true;
}

void* MyArr::get(int idx)
{
    if (idx < 0 || idx >= size)
        return NULL;

    return base[idx];
}