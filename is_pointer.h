#ifndef BCOSTA_CORE_CONTAINER_IS_POINTER_H
#define BCOSTA_CORE_CONTAINER_IS_POINTER_H

namespace BCosta
{
namespace Core
{
namespace Container
{

template<typename T>
struct IsPointer
{
    static const bool val = false;
};
template<typename T>
struct IsPointer<T *>
{
    static const bool val = true;
};

}
}
}

#endif // BCOSTA_CORE_CONTAINER_IS_POINTER_H