#include "BufferMove.h"

BufferMove::BufferMove(const std::initializer_list<float>& values)
    : m_size(values.size())
{
    m_ptr = new float[values.size()];
    std::copy(values.begin(), values.end(), m_ptr);
}

BufferMove::~BufferMove()
{
    delete[] m_ptr;
    m_ptr = nullptr;
}

BufferMove::BufferMove(const BufferMove& other)
    : m_size(other.m_size)
{
    m_ptr = new float[m_size];
    std::copy(other.begin(), other.end(), m_ptr);
}

auto& BufferMove::operator=(const BufferMove& other)
{
    m_size = other.m_size;

    delete[] m_ptr;
    m_ptr = new float[m_size];
    std::copy(other.begin(), other.end(), m_ptr);

    return *this;
}

BufferMove::BufferMove(BufferMove&& other) noexcept
    : m_size(other.m_size)
    , m_ptr(other.m_ptr)
{
    other.m_size = 0;
    other.m_ptr = nullptr;
}

auto& BufferMove::operator=(BufferMove&& other) noexcept
{
    delete[] m_ptr;

    m_size = other.m_size;
    m_ptr = other.m_ptr;

    other.m_size = 0;
    other.m_ptr = nullptr;

    return *this;
}

void BufferMove::showCopy()
{
    // Construct
    auto b0 = BufferMove({ 0.0f, 0.5f, 1.0f, 1.5f });

    // Copy-construct
    auto b1 = b0;

    // Copy-assignment as b0 is already initialized
    b0 = b1;

    // Move constructor
    auto b2 = std::move(b0);

    // Move assignment as b2 is already initialized
    b2 = std::move(b1);
}
