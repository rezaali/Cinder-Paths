#include "Paths.h"

using namespace cinder;
using namespace std;

namespace reza { namespace paths {
    
fs::path getPath( string path )
{
    fs::path p = app::getAssetPath( "" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getWorkingPath()
{
    return getPresetsPath( "Working" );
}

fs::path getPresetsPath( string path )
{
    fs::path p = getPath( "Presets" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getDataPath( string path )
{
    fs::path p = getPath( "Data" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getAudioPath( string path )
{
    fs::path p = getPath( "Audio" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getVideoPath( string path )
{
    fs::path p = getPath( "Video" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getFontsPath( string path )
{
    fs::path p = getPath( "Fonts" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getModelsPath( string path )
{
    fs::path p = getPath( "Models" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getImagesPath( string path )
{
    fs::path p = getPath( "Images" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getMatCapsPath( string path )
{
    fs::path p = getPath( "Matcaps" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getPalettesPath( string path )
{
    fs::path p = getPath( "Palettes" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getRendersPath( string path )
{
    fs::path p = getPath( "Renders" );
    if( path.length() > 0 ) { p += fs::path( "/" + path ); }
    return p;
}

fs::path getShadersPath( string path )
{
    fs::path p = getPath( "Shaders" );
    if( path.length() > 0 ) {
        p += fs::path( "/" + path );
    }
    return p;
}

bool createDirectory( const fs::path& path )
{
    if( !fs::exists( path ) ) {
        return fs::create_directory( path );
    } else {
        return true;
    }
}

bool createDirectories( const fs::path& path )
{
    if( !fs::exists( path ) ) {
        return fs::create_directories( path );
    } else {
        return true;
    }
}

void createAssetDirectories()
{
    createDirectory( getPresetsPath() );
    createDirectory( getWorkingPath() );
    createDirectory( getDataPath() );
    createDirectory( getAudioPath() );
    createDirectory( getVideoPath() );
    createDirectory( getFontsPath() );
    createDirectory( getModelsPath() );
    createDirectory( getImagesPath() );
    createDirectory( getMatCapsPath() );
    createDirectory( getPalettesPath() );
    createDirectory( getRendersPath() );
    createDirectory( getShadersPath() );
}

} } // namespace reza::paths