#define J CP::map_bst<K, M, C>
#define p ->parent
#define l ->left
#define r ->right
#define s mRoot
#define T typename
template <T K, T M, T C>
J J::split(K v)
{
	J Z;
	node *P, *R, *X = s;
	P = R = s = NULL;
	while (X - NULL)
	{
		if (!mLess(X->data.first, v))
		{
			if (!R)
				Z.s = X;
			else
				R l = X;
			X p = R;
			R = X;
			X = X l;
		}
		else
		{
			if (!P)
				s = X;
			else
				P r = X;
			X p = P;
			P = X;
			X = X r;
		}
	}
	if (P)
		P r = NULL;
	if (R)
		R l = NULL;
	return Z;
}
