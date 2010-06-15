/*
 * QPhotoView viewer widget.
 *
 * License: GPL V2. See file COPYING for details.
 *
 * Author:  Stefan Hundhammer <Stefan.Hundhammer@gmx.de>
 */

#ifndef PhotoView_h
#define PhotoView_h

#include <QGraphicsView>

class QGraphicsPixmapItem;
class QResizeEvent;
class QKeyEvent;
class PhotoDir;


/**
 * Photo view widget: Display an image and optional meta data (EXIF data).
 */
class PhotoView: public QGraphicsView
{
    Q_OBJECT

public:
    /**
     * Constructor.
     */
    PhotoView( PhotoDir * photoDir );

    /**
     * Destructor.
     */
    virtual ~PhotoView();

    /**
     * Load the current photo of the PhotoDir.
     * Returns 'true' on success, 'false' on failure.
     */
    bool loadImage();

    /**
     * Clear the currently displayed image.
     */
    void clear();

    /**
     * Return the current photo directory.
     **/
    PhotoDir * photoDir() const { return m_photoDir; }

protected:

    /**
     * Reload the current photo in the specified size.
     * Return 'true' on success, 'false' on error.
     */
    bool reloadCurrent( const QSize & size );

    /**
     * Reimplemented from QGraphicsView/QWidget
     */
    virtual void resizeEvent ( QResizeEvent * event );

    /**
     * Reimplemented from QGraphicsView
     */
    virtual void keyPressEvent( QKeyEvent * event );

private:

    PhotoDir *                  m_photoDir;
    QGraphicsPixmapItem *       m_canvas;
};


#endif // PhotoView_h
