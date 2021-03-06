// Datei : Logdatei.h

// --------------------------------------------------------------------------------------
//
// Logdatei Klasse
// zum leichten Handhaben einer Protokoll Datei
//
// (c) 2002 J�rg M. Winterstein
//
// --------------------------------------------------------------------------------------

#ifndef __Logdatei_h__
#define __Logdatei_h__

// --------------------------------------------------------------------------------------
// Klassendeklaration
// --------------------------------------------------------------------------------------

class Logdatei
{
	private:
		static const int MAX_FILENAME = 256;
		char itsFilename[MAX_FILENAME];								// Dateiname der Log-Datei

	public:
		bool	delLogFile;									// Logfile am Ende l�schen, wenn kein Fehler auftrat

		     Logdatei    (const char Name[MAX_FILENAME]);					// Konstruktor
			~Logdatei    (void);							// Desktruktor;
		void WriteText   (const char Text[180], bool Abbruch);	// Text in Datei schreiben
		void WriteValue  (int value);						// Wert in Datei schreiben
};

// --------------------------------------------------------------------------------------
// Externals
// --------------------------------------------------------------------------------------

extern Logdatei	Protokoll;

#endif

