
struct EditData
{
	EditData()
	{
	}
	EditData(const EditData &from)
	{
	}
	EditData &operator=(const EditData &from)
	{
	}

#ifndef RUN_ONLY
	bool Serialize(mv *mV, SerializedED *&SED) const
	{
		unsigned size = 0;
		{
			SerializedED *t = (SerializedED *)mvReAllocEditData(mV, SED, sizeof(SerializedED)+size);
			if(t)
			{
				SED = t;
			}
			else return false;
		}

//		char *p = (char *)(&SED->data);

		return true;
	}
#endif

	EditData(SerializedED *SED)
	{
		if(SED->Header.extVersion == 1)
		{
			//nothing to load from old structure
		}
		else
		{
			MessageBox(NULL, _T("The MFA you are trying to load was saved ")
			                 _T("with an unknown version of TileBox. Make ")
			                 _T("sure you don't save over your old MFA."),
			                 _T("Error Loading TileBox"), MB_OK);
		}
	}

	~EditData()
	{
	}
};
