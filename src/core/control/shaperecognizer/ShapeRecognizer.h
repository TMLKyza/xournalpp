/*
 * Xournal++
 *
 * Xournal Shape recognizer
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include <array>

#include "CircleRecognizer.h"
#include "RecoSegment.h"
#include "ShapeRecognizerConfig.h"

class Stroke;
class Point;

class ShapeRecognizer {
public:
    ShapeRecognizer();
    virtual ~ShapeRecognizer();

    Stroke* recognizePatterns(Stroke* stroke);
    void resetRecognizer();

private:
    Stroke* tryRectangle();
    // function Stroke* tryArrow(); removed after commit a3f7a251282dcfea8b4de695f28ce52bf2035da2

    static void optimizePolygonal(const Point* pt, int nsides, int* breaks, Inertia* ss);

    int findPolygonal(const Point* pt, int start, int end, int nsides, int* breaks, Inertia* ss);

private:
    std::array<RecoSegment, MAX_POLYGON_SIDES + 1> queue{};
    int queueLength;

    Stroke* stroke;
};
