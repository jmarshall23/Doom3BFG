// Snapmap.h
//

#pragma once

#define SNAPMAPIDEN			"snapversion"
#define SNAPMAPVERSION		"1"

struct rvmSnapMapCell {
	rvmSnapMapCell();
	~rvmSnapMapCell();

	idMapFile* mapFile;
	int x;
	int y;
	int rotation;
};

ID_INLINE rvmSnapMapCell::rvmSnapMapCell() {
	mapFile = NULL;
	x = -1;
	y = -1;
	rotation = -1;
}

ID_INLINE rvmSnapMapCell::~rvmSnapMapCell() {
	if (mapFile)
	{
		delete mapFile;
		mapFile = NULL;
	}
}

class rvmSnapMap {
public:
						~rvmSnapMap();

	void				ParseCell(idLexer& lexer);

	void				Build(const char *fileName);
private:
	idList<rvmSnapMapCell*> cells;
};

ID_INLINE rvmSnapMap::~rvmSnapMap() {
	for (int i = 0; i < cells.Num(); i++)
		delete cells[i];

	cells.Clear();
}