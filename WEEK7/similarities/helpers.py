def lines(a, b):
    """Return lines in both a and b"""
    list =[]
    len_large=[]
    len_small=[]
    a_split = a.split("\n")
    b_split = b.split("\n")
    a_split_len=len(a_split)
    b_split_len=len(b_split)
    if (a_split_len>=b_split_len):
        len_large=a_split
        len_small=b_split
    else:
        len_large=b_split
        len_small=a_split

    for i in len_small:
        if i in len_large:
            list.append(i)
    list=list(set(list))
    return list


def sentences(a, b):
    """Return sentences in both a and b"""

    # TODO
    return []


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    # TODO
    return []
