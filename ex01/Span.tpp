template <typename It>
void Span::addNumber(It begin, It end)
{
    for (It it = begin; it != end; ++it)
    {
        this->addNumber(*it);
    }
}