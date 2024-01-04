def lines(a, b):
    """Return lines in both a and b"""
    m_list =[]
    new_list=[]
    a_split = a.split("\n")
    b_split = b.split("\n")

    for i in min(a_split, b_split, key=len):
        if i in max(a_split, b_split, key=len):
            m_list.append(i)
            
    for element in m_list:
        if element not in new_list:
            new_list.append(element)
    return new_list


def sentences(a, b):
    """Return sentences in both a and b"""

    # TODO
    return []


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    # TODO
    return []
