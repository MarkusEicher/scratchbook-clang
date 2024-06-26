#include <stdio.h>
#include <string.h>

struct Album
{
    char title[35];
    char artist[35];
    char no_of_tracks[5];
    char year[5];
}album;

void DisplayAlbum(struct Album alb);

int main(void)
{
    strcpy(album.title, "Wish you were here");
    strcpy(album.artist, "Pink Floyd");
    strcpy(album.no_of_tracks, "5");
    strcpy(album.year, "1973");
    DisplayAlbum(album);

    return 0;
}

void DisplayAlbum(struct Album alb)
{
    puts(alb.title);
    puts(alb.artist);
    puts(alb.no_of_tracks);
    puts(alb.year);
}